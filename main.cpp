/*
int main()
{
json::Print(json::Document{json::Builder{}.StartArray().Value(1).Value(2).EndDict().Build()}, cout);
json::Builder{}.StartDict().Key("1"s).Value(1).Value(1);
json::Builder{}.StartArray().Value(1).Value(2).EndDict();
}
*/

#include "request_handler.h"

using namespace std;
using namespace map_entities;
using namespace transport_system;

int main()
{
    TransportCatalogue catalogue;
    MapRenderer renderer(catalogue);
    JsonReader j_reader(catalogue, renderer);
    RequestHandler r_handler(catalogue, renderer);
    j_reader.LoadData(cin);
    r_handler.FormAnswer(cout);
    return 0;
}