/* 
Júlio Shoji Zotovici Kobayashi
Class ServerDBconnection
June, 2024
*/

#include "ServerDBconnection.hpp"

using namespace std;

ServerDBconnection::ServerDBconnection(){
    serieMem = (new vector<Series *>);
};

ServerDBconnection::~ServerDBconnection(){
    this->connection->close();
};

void ServerDBconnection::close(){
    for(Series* serie : this->serieMem){
        delete serie;
    }
    serieMem.clear();
};

void ServerDBconnection::SeraddSeries(Series* serie){
    try
    {
        this->seriesMem->pushback(serie);
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
};
void ServerDBconnection::deleteSeries(int internal_id){
    try
    {
        vector<Series *>::iterator seriesIterator = this->serieMem->begin();
        while(seriesIterator != this->serieMem->end()){
            if((*seriesIterator)->getInternal_id() == internal_id){
                delete *seriesIterator;
                this->serieMem->erase(seriesIterator);
                break;
            }
            seriesIterator++;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
};
void ServerDBconnection::updateSeries(Series* serie){
    this->deleteSeries(serie->getInternal_id());
    this->addSeries(serie);
};
vector<Series* > getSeries(){
    return this->serieMem;
};