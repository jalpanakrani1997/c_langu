#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    int chem;
    int maths;
    int phy;
}

main()
{
    struct Student stu[5];

    for (int i = 0; i < 5; i++)
    {
        printf("Enter details of Student %d:\n", i + 1);

        printf("Roll no : ");
        scanf("%d", &stu[i].roll);

        printf("Name : ");
        fflush(stdin);
        gets(stu[i].name);

        printf("Chemistry marks : ");
        scanf("%d", &stu[i].chem);

        printf("Mathematics marks : ");
        scanf("%d", &stu[i].maths);

        printf("Physics marks : ");
        scanf("%d", &stu[i].phy);
        printf("\n");
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%s ", stu[i].name);
        printf("(%d)\n", stu[i].roll);
        printf("Chemistry => %d\n", stu[i].chem);
        printf("Mathematics => %d\n", stu[i].maths);
        printf("Physics => %d\n", stu[i].phy);

        int total = stu[i].chem + stu[i].maths + stu[i].phy;
        float percen = (float)total / 300 * 100;

        printf("Total => %d/300\n", total);
        printf("Percentage => %.2f%%\n", percen);
        printf("\n");
    }
}
