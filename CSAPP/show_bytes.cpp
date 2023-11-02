#include<stdio.h>
#include<cstring>
typedef unsigned char *byte_pointer;

void show_bytes(byte_pointer start, size_t len)
{
    size_t i;
    printf("len = %d\n", len);
    for (int i = 0; i < len; i++) 
        printf("%.2x", start[i]);
    printf("\n");
}

void show_int(int x) {
    show_bytes((byte_pointer) &x, sizeof(x));
}

void show_float(float x)  {
    show_bytes((byte_pointer) &x, sizeof(x));
}

void show_pointer(void *x) {
    show_bytes((byte_pointer) &x, sizeof(x));
}

void test_show_bytes(int val){
    int ival = val;
    float fval = (float) ival;
    int *pval = &ival;
    show_int(ival);
    show_float(fval);
    show_pointer(pval);
}
int main()
{
    // int x = 12345;
    // test_show_bytes(x);
    const char *s = "abcdef";
    show_bytes((byte_pointer)s, strlen(s));
}