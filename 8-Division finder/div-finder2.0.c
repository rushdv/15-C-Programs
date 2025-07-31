#include <stdio.h>
#include <string.h>

int main() {
    // Districts for each division
    const char *dhaka[] = {
        "dhaka", "faridpur", "gazipur", "gopalganj", "kishoreganj",
        "madaripur", "manikganj", "munshiganj", "narayanganj",
        "narsingdi", "rajbari", "shariatpur", "tangail"
    };

    const char *chattogram[] = {
        "chattogram", "coxsbazar", "cumilla", "brahmanbaria", "feni",
        "lakshmipur", "noakhali", "chandpur", "khagrachari", "rangamati", "bandarban"
    };

    const char *rajshahi[] = {
        "rajshahi", "bogura", "joypurhat", "naogaon", "natore",
        "chapainawabganj", "pabna", "sirajganj"
    };

    const char *khulna[] = {
        "khulna", "bagerhat", "chuadanga", "jashore", "jhenaidah",
        "kushtia", "magura", "meherpur", "narail", "satkhira"
    };

    const char *barishal[] = {
        "barishal", "bhola", "jhalokathi", "patuakhali", "pirojpur", "barguna"
    };

    const char *sylhet[] = {
        "sylhet", "habiganj", "moulvibazar", "sunamganj"
    };

    const char *rangpur[] = {
        "rangpur", "dinajpur", "gaibandha", "kurigram", "lalmonirhat",
        "nilphamari", "panchagarh", "thakurgaon"
    };

    const char *mymensingh[] = {
        "mymensingh", "jamalpur", "netrokona", "sherpur"
    };

    char input[30];
    int found = 0;

    printf("Enter district name: ");
    scanf("%s", input);

    // Convert input to lowercase
    for (int i = 0; input[i]; i++) {
        if (input[i] >= 'A' && input[i] <= 'Z') {
            input[i] += 32;
        }
    }

    // Search in each division
    int i;
    for (i = 0; i < sizeof(dhaka) / sizeof(dhaka[0]); i++) {
        if (strcmp(input, dhaka[i]) == 0) {
            printf("Division: Dhaka\n");
            found = 1;
            break;
        }
    }

    for (i = 0; !found && i < sizeof(chattogram) / sizeof(chattogram[0]); i++) {
        if (strcmp(input, chattogram[i]) == 0) {
            printf("Division: Chattogram\n");
            found = 1;
            break;
        }
    }

    for (i = 0; !found && i < sizeof(rajshahi) / sizeof(rajshahi[0]); i++) {
        if (strcmp(input, rajshahi[i]) == 0) {
            printf("Division: Rajshahi\n");
            found = 1;
            break;
        }
    }

    for (i = 0; !found && i < sizeof(khulna) / sizeof(khulna[0]); i++) {
        if (strcmp(input, khulna[i]) == 0) {
            printf("Division: Khulna\n");
            found = 1;
            break;
        }
    }

    for (i = 0; !found && i < sizeof(barishal) / sizeof(barishal[0]); i++) {
        if (strcmp(input, barishal[i]) == 0) {
            printf("Division: Barishal\n");
            found = 1;
            break;
        }
    }

    for (i = 0; !found && i < sizeof(sylhet) / sizeof(sylhet[0]); i++) {
        if (strcmp(input, sylhet[i]) == 0) {
            printf("Division: Sylhet\n");
            found = 1;
            break;
        }
    }

    for (i = 0; !found && i < sizeof(rangpur) / sizeof(rangpur[0]); i++) {
        if (strcmp(input, rangpur[i]) == 0) {
            printf("Division: Rangpur\n");
            found = 1;
            break;
        }
    }

    for (i = 0; !found && i < sizeof(mymensingh) / sizeof(mymensingh[0]); i++) {
        if (strcmp(input, mymensingh[i]) == 0) {
            printf("Division: Mymensingh\n");
            found = 1;
            break;
        }
    }

    if (!found) {
        printf("District not found or misspelled.\n");
    }

    return 0;
}
