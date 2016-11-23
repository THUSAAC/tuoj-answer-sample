#include <bits/stdc++.h>

using namespace std;

int main(int, char* args[]) {
	FILE *playerOut = fopen(args[2], "r");
	FILE *stdOut = fopen(args[3], "r");
	FILE *fullSco = fopen(args[4], "r");
	FILE *scoreOut = fopen(args[5], "w");
	FILE *extOut = fopen(args[6], "w");
	double x, y, z;
	fscanf(playerOut, "%lf", &x);
	fclose(playerOut);
	fscanf(stdOut, "%lf", &y);
	fclose(stdOut);
	fscanf(fullSco, "%lf", &z);
	fclose(fullSco);
	if (x > y) {
		fprintf(scoreOut, "0\n");
		fprintf(extOut, "Naive\n");
	} else {
		fprintf(scoreOut, "%.0lf\n", x / y * z);
		fprintf(extOut, "partially right\n");
	}
	fclose(scoreOut);
	fclose(extOut);
}
