#include <stdio.h>
#include <string.h>

int main()
{

    // Variabel untuk akun yang akan didaftarkan
    char newUsername[20];
    char newPassword[20];

    // Meminta pengguna untuk mendaftar
    printf("Pendaftaran\n");
    printf("Masukkan username baru: ");
    scanf("%s", newUsername);
    printf("Masukkan password baru: ");
    scanf("%s", newPassword);

    // Meminta pengguna untuk login
    char inputUsername[20];
    char inputPassword[20];

    printf("\nLogin\n");
    printf("Masukkan username: ");
    scanf("%s", inputUsername);
    printf("Masukkan password: ");
    scanf("%s", inputPassword);

    // Memeriksa apakah username dan password benar
    if (strcmp(inputPassword, newPassword) == 0 && strcmp(inputUsername, newUsername) == 0)
    {
        printf("Login Berhasil\n");
    }
    else
    {
        printf("Login Gagal\n");
    }

    return 0;
}

// #include <stdio.h>
// #include <string.h>

// int main() {
//     // Data akun default
//     char defaultUsername[20] = "username";
//     char defaultPassword[20] = "password";

//     // Variabel untuk akun yang akan didaftarkan
//     char newUsername[20];
//     char newPassword[20];

//     // Meminta pengguna untuk mendaftar
//     printf("Pendaftaran\n");
//     printf("Masukkan username baru: ");
//     scanf("%s", newUsername);
//     printf("Masukkan password baru: ");
//     scanf("%s", newPassword);

//     // Menyimpan akun baru
//     strcpy(defaultUsername, newUsername);
//     strcpy(defaultPassword, newPassword);

//     // Meminta pengguna untuk login
//     char inputUsername[20];
//     char inputPassword[20];

//     printf("\nLogin\n");
//     printf("Masukkan username: ");
//     scanf("%s", inputUsername);
//     printf("Masukkan password: ");
//     scanf("%s", inputPassword);

//     // Memeriksa apakah username dan password benar
//     if (strcmp(inputUsername, defaultUsername) == 0 && strcmp(inputPassword, defaultPassword) == 0) {
//         printf("Login Berhasil\n");
//     } else {
//         printf("Login Gagal\n");
//     }

//     return 0;
// }
