
#include <stdio.h>
union gorev {
    int maas;
    int ssk_no;
} gorev1;

int main() {
    gorev1.maas = 500;
    gorev1.ssk_no = 100;

    printf("maas = %d\n", gorev1.maas);
    printf("Number of workers = %d", gorev1.ssk_no);
    return 0;
}
