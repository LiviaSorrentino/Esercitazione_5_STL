#pragma once
#include <iostream>
#include "PolygonalMesh.hpp"

using namespace std;
namespace PolygonalLibrary{
bool ImportMesh(const string& fileName, PolygonalMesh& mesh);

bool ImportCell0Ds(const string& fileName, PolygonalMesh& mesh);

bool ImportCell1Ds(const string& fileName, PolygonalMesh& mesh);

bool ImportCell2Ds(const string& fileName, PolygonalMesh& mesh);


}
