int maxrand(int seed,int max)

{

int random_seed=0;
random_seed = random_seed+seed * 1103515245 +12345;
return (unsigned int)(random_seed / 65536) % (max+1);

}
