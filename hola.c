#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FILENAME "usuarios.dat"

typedef struct {
    int id;
    char nombre[50];
    int edad;
} Usuario;


void crearUsuario() {
    FILE *archivo = fopen(FILENAME, "ab");
    if (archivo == NULL) {
        printf("Error al abrir el archivo.\n");
        return;
    }

    Usuario u;
    printf("Ingrese el ID del usuario: ");
    scanf("%d", &u.id);
    printf("Ingrese el nombre del usuario: ");
    fflush(stdin);
    gets(u.nombre); 
    printf("Ingrese la edad del usuario: ");
    scanf("%d", &u.edad);

    fwrite(&u, sizeof(Usuario), 1, archivo);
    fclose(archivo);
    printf("Usuario agregado exitosamente.\n");
}


void mostrarUsuarios() {
    FILE *archivo = fopen(FILENAME, "rb");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo o esta vacio.\n");
        return;
    }

    Usuario u;
    printf("\nLista de usuarios:\n");
    printf("===================\n");
    while (fread(&u, sizeof(Usuario), 1, archivo)) {
        printf("ID: %d\n", u.id);
        printf("Nombre: %s\n", u.nombre);
        printf("Edad: %d\n", u.edad);
        printf("-------------------\n");
    }
    fclose(archivo);
}


void buscarUsuario() {
    int id;
    printf("Ingrese el ID del usuario a buscar: ");
    scanf("%d", &id);

    FILE *archivo = fopen(FILENAME, "rb");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return;
    }

    Usuario u;
    int encontrado = 0;
    while (fread(&u, sizeof(Usuario), 1, archivo)) {
        if (u.id == id) {
            printf("Usuario encontrado:\n");
            printf("ID: %d\n", u.id);
            printf("Nombre: %s\n", u.nombre);
            printf("Edad: %d\n", u.edad);
            encontrado = 1;
            break;
        }
    }
    if (!encontrado) {
        printf("Usuario no encontrado.\n");
    }
    fclose(archivo);
}


void actualizarUsuario() {
    int id;
    printf("Ingrese el ID del usuario a actualizar: ");
    scanf("%d", &id);

    FILE *archivo = fopen(FILENAME, "rb+");
    if (archivo == NULL) {
        printf("No se pudo abrir el archivo.\n");
        return;
    }

    Usuario u;
    int encontrado = 0;
    while (fread(&u, sizeof(Usuario), 1, archivo)) {
        if (u.id == id) {
            printf("Ingrese el nuevo nombre: ");
            fflush(stdin);
            gets(u.nombre);
            printf("Ingrese la nueva edad: ");
            scanf("%d", &u.edad);

            fseek(archivo, -sizeof(Usuario), SEEK_CUR); 
            fwrite(&u, sizeof(Usuario), 1, archivo);
            printf("Usuario actualizado exitosamente.\n");
            encontrado = 1;
            break;
        }
    }

    if (!encontrado) {
        printf("Usuario no encontrado.\n");
    }
    fclose(archivo);
}


void eliminarUsuario() {
    int id;
    printf("Ingrese el ID del usuario a eliminar: ");
    scanf("%d", &id);

    FILE *archivo = fopen(FILENAME, "rb");
    FILE *temp = fopen("temp.dat", "wb");
    if (archivo == NULL || temp == NULL) {
        printf("Error al abrir los archivos.\n");
        return;
    }

    Usuario u;
    int encontrado = 0;
    while (fread(&u, sizeof(Usuario), 1, archivo)) {
        if (u.id == id) {
            printf("Usuario con ID %d eliminado.\n", u.id);
            encontrado = 1;
        } else {
            fwrite(&u, sizeof(Usuario), 1, temp);
        }
    }

    fclose(archivo);
    fclose(temp);

    remove(FILENAME);
    rename("temp.dat", FILENAME);

    if (!encontrado) {
        printf("Usuario no encontrado.\n");
    }
}


int main() {
    int opcion;

    do {
        printf("\n--- CRUD de Usuarios ---\n");
        printf("1. Crear usuario\n");
        printf("2. Mostrar usuarios\n");
        printf("3. Buscar usuario\n");
        printf("4. Actualizar usuario\n");
        printf("5. Eliminar usuario\n");
        printf("6. Salir\n");
        printf("Elija una opcion: ");
        scanf("%d", &opcion);

        switch (opcion) {
            case 1:
                crearUsuario();
                break;
            case 2:
                mostrarUsuarios();
                break;
            case 3:
                buscarUsuario();
                break;
            case 4:
                actualizarUsuario();
                break;
            case 5:
                eliminarUsuario();
                break;
            case 6:
                printf("Saliendo...\n");
                break;
            default:
                printf("Opcion no valida.\n");
                break;
        }
    } while (opcion != 6);

    return 0;
}