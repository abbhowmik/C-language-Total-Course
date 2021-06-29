#include <stdio.h>
#include <string.h>

struct Drivers
{
    char name[23];
    char route[12];
    int dlNo;
    int kms;
} d1, d2, d3;

int main()
{
    printf("Enter the name of first dirver\n");
    scanf("%s", &d1.name);
    printf("Enter the dlNo of first dirver\n");
    scanf("%d", &d1.dlNo);
    printf("Enter the route of first dirver\n");
    scanf("%s", &d1.route);
    printf("Enter the kms of first dirver's ride in bus\n");
    scanf("%d", &d1.kms);

    printf("Enter the name of second dirver\n");
    scanf("%s", &d2.name);
    printf("Enter the dlNo of second dirver\n");
    scanf("%d", &d2.dlNo);
    printf("Enter the route of second dirver\n");
    scanf("%s", &d2.route);
    printf("Enter the kms of second dirver's ride in bus\n");
    scanf("%d", &d2.kms);

    printf("Enter the name of third dirver\n");
    scanf("%s", &d3.name);
    printf("Enter the dlNo of third dirver\n");
    scanf("%d", &d3.dlNo);
    printf("Enter the route of third dirver\n");
    scanf("%s", &d3.route);
    printf("Enter the kms of third dirver's ride in bus\n");
    scanf("%d", &d3.kms);

    printf("Here is the information of all the drives\n\n");

    printf("The name of the first driver is %s\n", d1.name);
    printf("The dlNo of the first driver is %d\n", d1.dlNo);
    printf("The route of the first driver is %s\n", d1.route);
    printf("The kms are ride the first driver is %d\n\n", d1.kms);

    printf("The name of the second driver is %s\n", d2.name);
    printf("The name of the second driver is %d\n", d2.dlNo);
    printf("The name of the second driver is %s\n", d2.route);
    printf("The kms are ride the first driver is %d\n\n", d2.kms);

    printf("The name of the third driver is %s\n", d3.name);
    printf("The name of the third driver is %d\n", d3.dlNo);
    printf("The name of the third driver is %s\n", d3.route);
    printf("The kms are ride the first driver is %d\n\n", d3.kms);

    return 0;
}