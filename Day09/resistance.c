int resistanceCalc(double R1, double R2, double *Rs, double *Rp){
    if (R1 < 0 || R2 < 0){
        return 1;
    }
    if (R1 == 0 || R2 == 0){
        return 2;
    }
    *Rs = R1 + R2;
    *Rp = R1 * R2 / (R1 + R2);
    return 0;
}