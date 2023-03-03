# include <cstdio>

void swap(int &a, int &b){
    int aux = a;
    a = b;
    b = aux;
}

int mcd(int m, int n){
    if (m < n){
        swap(m,n);
    }

    if (m%n == 0){
        return n;
    }else{
        int aux = m % n;
        m = n;
        n = aux;
        //printf("%i ", aux);
        return mcd(m,n);
    }
}

int main(){
    int m,n;

    scanf("%i", &m);
    scanf("%i", &n);

    printf("%i", mcd(m,n));

    return 0;
}
