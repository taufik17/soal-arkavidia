#include <iostream>
using namespace std;

struct matriks{
  int a;
  int b;
};
void swap(int *xp, int *yp)
{
    int temp = *xp;
    *xp = *yp;
    *yp = temp;
}
int perkalian(int x,int y){
  return x*y;
}
int main(){
    int n;
    cin>>n;
    matriks A[n];
    int B[n];
    for(int i=0;i<n;i++){
      cin>>A[i].a;
      cin>>A[i].b;
    }

    cout<<"\n\n";

    for(int i=0;i<n;i++){
        B[i] = perkalian(A[i].a, A[i].b);
        cout<<perkalian(A[i].a, A[i].b)<<endl;
    }
    for (int i = 0; i < n-i-1; i++)
           if (B[i] > B[i+1])
              swap(&A[i], &A[i+1]);
    }

    /*for(int i=0;i<n;i++){
        cout<<A[i].a<<" ";
        cout<<A[i].b<<endl;
    }*/
}
