// [Normalization]
void normalize(double *out, int *in, int n) {
    for (int i = 0; i < n; i ++) out[i] = (double)in[i] / 255;
}