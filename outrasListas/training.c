#include <stdio.h>

int main(){
	int n, x, y = 0;
	scanf("%d", &n);
	
	for (int i=0; i<n;){
		scanf("%d", &x);
		if (x==1&&i<=n){
			i++;
			scanf("%d", &x);
			if (x==0&&i<n){
				i++;
				scanf("%d", &x);
				if (x==0&&i<n){
					i++;
					y++;
				} else {
					i++;
				}
			} else {
				i++;
			}
		} else {
			i++;
		}
	}
	
	printf("%d", y);
	
	return 0;
}