#// Online C compiler to run C program online
#include <stdio.h>
int some(int x){
   int s=0;
   int i;
    for(i=0;i<x;i++){
    s=s+x;
   int m=s/x;
    } return m;
int valide(int x) {
for(i=0;i<x;i++){
 int va=x>12;
} return va ;
int ratt(int x){
    for(i=0;i<x;i++){
    int ra=x<12;
    } return ra;
}
int sa9et(int x)
for(i=0;i<x;i++){
 int sep=x<10;
} return sep;


int main() {
  int lenombreetudiant,i,m;
  int t[100];
  int sep,va,ra;
    printf("entrer le nombre d'etudiant ");
    scanf("%d",&lenombreetudiant);
    for(i=0;i<lenombreetudiant;i++){
        printf("entrer la note  %d etudiant ",i+1);
        scanf("%d",&t[lenombreetudiant]);

do{
char choix;
printf("que souhaitez vous faire");
printf("1 calcule la moyanne de notes");
printf("2 trouver la notes la plus elevee et le plus grand");
printf("3 afficher les notes superier a la moyenne");
printf("4 compter le nombre d etidiant ayant valide ");
printf("5 compter le nombre d etudiants en rattrapage ");
switch (choix){
    case 1 :some(t[i]);
    break ;
    case 2:
    break;
    case 3 :sa9et(t[i]);
    break;
     case 4:valide(t[i]);
    break;
     case 5:ratt(t[i]);
    break;
}
} while (choix!=6);
    return 0;
}
