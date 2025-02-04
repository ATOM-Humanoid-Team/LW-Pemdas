// Memory Allocation

// Malloc
// Malloc merupakan fungsi standart untuk mengalokasikan memori.

void* malloc (size_t jml_byte);

// Examples
int *x;
x = (int*) malloc (3 * sizeof(int)); // malloc
if(x==NULL) {
cout << “Error di malloc” << endl;
exit(0);
} else {
cout << “Lakukan operasi memori dinamis” << endl;
}

/*Sintak tersebut artinya kita mengalokasikan ruang memori sebanyak 12 byte (berasal dari
3x4 ) untuk menyimpan tipe data int dan mencatat ruang tersebut kedalam pointer x (*x) .*/

// Calloc

void* calloc (size_t n, size_t size);

// Example

int *x;
x = (int*) calloc (50, sizeof(int));

/*Jadi sintak tersebut mengalokasikan 200 byte ruang memori (yang berasal dari 50 x 4). Jadi
terdapat 50 elemen array yang masing-masing elemen memiliki ukuran 4 byte.*/


// Realloc
// Keguanan dari fungsi dari ralloc adalah mengalokasikan ulang memori yang telah digunakan
// dalam fungsi malloc () dan calloc ().

void* realloc(void* p , size_t size);


// Example

int *x;
x = (int *) calloc (10, sizeof (int)) ;
/* memesan ruang baru 40 byte*/
realloc((int*) x, 80 );
/* memesan ruang sebanyak 40 byte lagi */

// Free
// Fungsi dari free adalah untuk membebaskan memori yang telah dipakai dalam fungsi
// malloc(), calloc(), atau realloc().

void free (void* p)

// Example

int *x ;
x=(int *) malloc (sizeof(int));
free(x);

// C++ terbaru (versi 11)
int* nilai = new int;

// Example
int* p1 = new int;
delete p1;
int* p2 = new int[10];
delete[] p2;