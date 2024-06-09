namespace popcnt
{
    int count(void* cnt)
    {
        long a = (long)(cnt);
        a = (int)(a/10);
        return a;
    }
}
