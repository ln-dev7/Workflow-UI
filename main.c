int main(int argc, char const *argv[])
{
    /* code */
    // Fonction qui tri un tableau par ordre croissant
    int tab[5] = {1,2,3,4,5};
    int i,j,tmp;
    for (i = 0; i < 5; i++)
    {
        for (j = 0; j < 5; j++)
        {
            if (tab[i] < tab[j])
            {
                tmp = tab[i];
                tab[i] = tab[j];
                tab[j] = tmp;
            }
        }
    }
    return 0;
}
