
int** resizePlantDataArray(int **arr, int &numPlants, int &numDays, int addPlants, int addDays) {

    int** newArr = new int*[numPlants + addPlants];
    
    for(int i = 0; i < numPlants + addPlants; ++i) {
        newArr[i] = new int[numDays + addDays];
    }

    for(int i = 0; i < numPlants; ++i) {
        for(int j = 0; j < numDays; ++j) {
            newArr[i][j] = arr[i][j];
        }
    }

    for(int i = 0; i < numPlants; ++i) {
        delete [] arr[i];
    }

    delete [] arr;

    numPlants += addPlants;
    numDays += addDays;

    return newArr;
}



int main() {

    int plants = 3; 
    int days = 3;

    int addDays = 1; 
    int addPlants = 1;

    int **arr = new int*[3];
    for(int i = 0; i < 3; ++i) {
        arr[i] = new int[3];
    }

    arr = resizePlantDataArray(arr, plants, days, addDays, addPlants);

    int x = arr[3][3];

    return 0;
}