float cm_to_in(void)
{
    float cm = get_float("Number of centimeters:");
    float in = cm / 2.54;
    printf("\nThe number of inches is %.2f\n", in);
    return in;
}
float cm_to_mi(void)
{
    float cm = get_float("Number of centimeters:");
    float mi = cm / 160934.4;
    printf("\nThe number of miles is %.2f\n", mi);
    return mi;
}
