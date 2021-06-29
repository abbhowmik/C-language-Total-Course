#include <stdio.h>
#include <stdlib.h>
int main()
{
    printf("File name is %s\n", __FILE__);
    printf("Date is %s\n", __DATE__);
    printf("Time now is %s\n", __TIME__);
    printf("Line No. is %d\n", __LINE__);
    printf("Aski: %d\n", __STDC__);
    return 0;
}
// thus we print time, date, line no, file name
