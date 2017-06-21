#include <stdio.h>

float f(float t, float y) {	return 3*y+3*t; }

void main() {
	float t0, yt;
	int i, n;

	n=24;
	t0=0;
	yt=1;

	printf("            Ti            Yi\n=============================\n");
	printf("%14f%14f\n",t0,yt);
	for(i=1;i<=n;i++) {
		yt=yt+0.125*f(t0,yt);
		t0=(float)i/8;
		printf("%14f%14f\n",t0,yt);
	}

	return;
}
