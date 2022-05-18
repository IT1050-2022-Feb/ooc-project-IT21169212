#include <iostream>
using namespace std;

class Category{

private:
  int catID;
  string catName;

public:
  Category();
  Category(int categoryID, string categoryName);
  void addNewVehicle();
  void deleteVehicle();
  ~Category();
};