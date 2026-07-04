///3.create multiple structure variables with different values, using just one structure
#include<stdio.h>
//----------------Create structure------------------
struct student_Info{
char name;
int batch;
int id;
char section;
};

int main(){
//----------------variable create------------------
struct student_Info S1;
struct student_Info S2;
struct student_Info S3;

//----------------value assign------------------
S1.name = 'T';
S1.batch = 261;
S1.id = 39;
S1.section = 'D';

S2.name = 'E';
S2.batch = 261;
S2.id = 40;
S2.section = 'D';

S3.name = 'I';
S3.batch = 261;
S3.id = 41;
S3.section = 'D';

printf("%c ", S1.name);
printf("%d ", S1.batch);
printf("%d ", S1.id);
printf("%c ", S1.section);

printf("\n\n");
printf("%c ", S2.name);
printf("%d ", S2.batch);
printf("%d ", S2.id);
printf("%c ", S2.section);

printf("\n\n");
printf("%c ", S3.name);
printf("%d ", S3.batch);
printf("%d ", S3.id);
printf("%c ", S3.section);

return 0;
}
