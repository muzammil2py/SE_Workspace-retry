#include <stdio.h>
struct student {
    char name[20];
    int roll;
    float marks;
};

int main() {
    struct student s[3];
    int i;
    for(i=0;i<3;i++) {
        scanf("%s %d %f", s[i].name, &s[i].roll, &s[i].marks);
    }
    for(i=0;i<3;i++) {
        printf("%s %d %.2f\n", s[i].name, s[i].roll, s[i].marks);
    }
    return 0;
}

#include <stdio.h>
int main() {
    FILE *fp;
    char ch;

    fp = fopen("test.txt", "w");
    fprintf(fp, "Hello File");
    fclose(fp);

    fp = fopen("test.txt", "r");
    while((ch=fgetc(fp))!=EOF)
        printf("%c", ch);
    fclose(fp);

    return 0;
}

