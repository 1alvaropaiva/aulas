#include <stdio.h>
#include <stdlib.h>

int main(){    	
    int t1, t2, t3;
    scanf("%d", &t1);
    scanf("%d", &t2);
    scanf("%d", &t3);

    if (t1<t2&&t1<t3&&t2<t3){
        printf("1\n");
        printf("2\n");
        printf("3\n");
    } else if (t1<t2&&t1<t3&&t3<t2){
        printf("1\n");
        printf("3\n");
        printf("2\n");
    } else if (t2<t1&&t2<t3&&t1<t3){
        printf("2\n");
        printf("1\n");
        printf("3\n");
    } else if (t2<t1&&t2<t3&&t3<t1){
    	printf("3\n");
        printf("1\n");
        printf("2\n");
	} else if (t3<t1&&t3<t2&&t1<t2){
		printf("3\n");
        printf("1\n");
        printf("2\n");
	} else {
		printf("3\n");
        printf("2\n");
        printf("1\n");
	}
    return 0;
}





/*
https://neps.academy/br/exercise/139
int main(){    	
	int a, b, area;
	scanf("%d", &a);
	scanf("%d", &b);
	area = a*b;
	printf("%d", area);
	
    return 0;
}*/