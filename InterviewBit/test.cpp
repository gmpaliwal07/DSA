#include<bits/stdc++.h>
using namespace std;

int* performOps(int *A, int len, int *blen) {
    int i;
    *blen = len * 2;
    int *B = (int *)malloc((*blen) * sizeof(int));
    for (i = 0; i < len; i++) {
        B[i] = A[i];
        B[i + len] = A[(len - i) % len];
    }
    return B;
}

int main(int argc, char const *argv[])
{
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif
int blen; 
int *B = performOps({5,10,2,1}, 4, &blen);
int i;
for (i = 0; i < blen; i++) {
    printf("%d ", B[i]);
}
return 0;
}