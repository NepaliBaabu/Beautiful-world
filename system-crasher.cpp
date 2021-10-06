// An incorrect program.  Do Not Execute!

int main()
{
  int crash[10], i;

  for(i=0; i<100; i++)
      crash[i] = i; // Error! array overrun

  return 1;
}
