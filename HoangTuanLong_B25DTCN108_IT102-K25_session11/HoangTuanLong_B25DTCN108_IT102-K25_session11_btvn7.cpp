include <stdio.h>

int main() {
    int n;
    printf("Nhap so thang: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("Can it nhat 2 thang de tinh toan!\n");
        return 0;
    }

    int arr[n];
    printf("Nhap gia co phieu tung thang:\n");
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    int giaMua = arr[0];
    int loNhoNhat = 0;
    int thangBan = -1;
    for (int i = 1; i < n; i++) {
        int lo = arr[i] - giaMua;
        if (lo < 0) {
            if (thangBan == -1 || lo > loNhoNhat) {
                loNhoNhat = lo;
                thangBan = i + 1;
            }
        }
    }

    if (thangBan == -1) {
        printf("Khong co thang nao bi lo. Ban se luon lai!\n");
    } else {
        printf("Thang ban tot nhat de lo it nhat la thang %d (lo %d)\n", thangBan, -loNhoNhat);
    }

    return 0;
} 
