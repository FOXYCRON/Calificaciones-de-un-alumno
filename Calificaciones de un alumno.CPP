#include<conio.h>
#include<stdio.h>
char noma[35], mat[20];
int nci, nasis, nas, nact, faltas, anp, calif_asis, calif_tareas;
float cal, calif_examen, calif_final;

main()
{
	printf("CALIFICACIONES DE UN ALUMNO \n\n");
   printf(" Nombre del alumno: "); gets (noma);
   printf("\n Nombre de la materia: "); gets(mat);
   printf("\n Numero de clases impartidas : "); scanf("%d", &nci);
   printf("\n Numero de asistencias en el parcial: "); scanf("%d", &nasis);
   printf("\n Numero de actividades solicitadas: "); scanf("%d", &nas);
   printf("\n Numero de actividades presentadas: "); scanf("%d", &nact);
   printf("\n Calificacion del examen: "); scanf("%f", &cal);
   faltas=nci-nasis;
   printf("\n Total de faltas: %d", faltas);
   anp=nas-nact;
   printf("\n Total de actividades no presentadas: %d", anp);
   if (faltas>2)
   {
   	calif_asis=0;
   }
   else
   {
   	calif_asis=1;
   }
   if (anp>=2)
   {
   	calif_tareas=0;
   }
   else
   {
   	calif_tareas=3;
   }
   calif_examen= cal*.60;
   calif_final=calif_asis+calif_tareas+calif_examen;

   printf("\n Calificacion de la asistencia: %d", calif_asis);
   printf("\n Calificacion de las tareas: %d", calif_tareas);
   printf("\n Calificacion del examen: %.2f", calif_examen);
   printf("\n Calificacion final: %.2f", calif_final);
   printf("\n\n\n Autor: Irvin Adrian");
   getch();
}
