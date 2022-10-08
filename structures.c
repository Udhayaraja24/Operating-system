struct Student {
  int regno;
  char name[20];
};

int main() {
  struct Student s1;
  s1.regno= 192111020;
  strcpy(s1.name,"Udhaya");
  printf("Reg no : %d\n", s1.regno);
  printf("Name   : %s\n", s1.name);

  return 0;
}
