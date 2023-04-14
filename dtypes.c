#include <stdio.h>
#include <limits.h>

int main(void)
{
    printf("\n");
    int n = printf("Data type sizes");
    printf("\n");
    for(; n-- != 0; printf("="));
    printf("\n");
    printf("\n\tshort int:\n\tsize = %d bytes, Range = %d to %d\n\n", sizeof(short int), SHRT_MIN, SHRT_MAX);
    printf("\tint:\n\tsize = %d bytes, Range = %d to %d\n\n", sizeof(int), INT_MIN, INT_MAX);
    printf("\tunsigned int:\n\tsize = %d bytes, Range = %d to %u\n\n", sizeof(int), 0, UINT_MAX);
    printf("\tlong:\n\tsize = %d bytes, Range = %d to %d\n\n", sizeof(long), LONG_MIN, LONG_MAX);
    printf("\tunsigned long:\n\tsize = %d bytes, Range = %d to %lu\n\n", sizeof(long), 0, ULONG_MAX);
    printf("\tlong long:\n\tsize = %d bytes, Range = %lld to %lld\n\n", sizeof(long long), LLONG_MIN, LLONG_MAX);
    printf("\tunsigned long long:\n\tsize = %d bytes, Range = %d to %llu\n\n", sizeof(long long), 0, ULLONG_MAX);
    printf("\tchar:\n\tsize = %d bytes, Range = %d to %d\n\n", sizeof(char), CHAR_MIN, CHAR_MAX);
    printf("\tunsigned char:\n\tsize = %d bytes, Range = %d to %d\n\n", sizeof(char), 0, UCHAR_MAX);
    printf("\tfloat:\n\tsize = %d bytes\n\n", sizeof(float));
    printf("\tdouble:\n\tsize = %d bytes\n\n", sizeof(double));
    printf("\tlong double:\n\tsize = %d bytes\n\n", sizeof(long double));
}
