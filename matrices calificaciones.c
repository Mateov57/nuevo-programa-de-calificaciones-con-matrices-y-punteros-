#include <stdio.h>
/*funcion para el promedio por estudiante*/
void promedioporestudiante ( float *ptr, int estudiantes ); 
int main() {
    int estudiantes;
    int i, j;
    float *ptr; /*uso de punteros en la matriz*/
    printf("Ingrese la cantidad de estudiantes: ");
    scanf("%d", &estudiantes);

    
    float promedioporestudiante (&notas[estudiantes][3]);
    /*ingreso de notas*/
    for(i = 0; i < estudiantes; i++) {
        printf("\nEstudiante %d\n", i + 1);

        for(j = 0; j < 3; j++) {
            printf("Ingrese la nota de la materia %d: ", j + 1);
            scanf("%f", ((*ptr));
        }
    }

    printf("Estudiante %d: %.2f\n", i + 1,(*ptr));
    printf("\n===== PROMEDIO POR MATERIA =====\n");

    for(j = 0; j < 3; j++) {
        float suma = 0;

        for(i = 0; i < estudiantes; i++) {
            suma += *ptr[i][j];
        }

        printf("Materia %d: %.2f\n", j + 1, suma / estudiantes);
    }

    return 0;
}
    void promedioporestudiante ( float *ptr, int estudiantes ){ 
    int i, j;
    printf("\n===== PROMEDIO POR ESTUDIANTE =====\n");

    for(i = 0; i < estudiantes; i++) {
        float suma = 0;

        for(j = 0; j < 3; j++) {
            suma += *ptr;
        }

        
        return *ptr; 
    }
    }