/* 
Júlio Shoji Zotovici Kobayashi
Class SeriesDAO
June, 2024
*/

#include "SeriesDAO.hpp"

SeriesDAO::SeriesDAO(ServerDBconnection* serverConn) :  serverConn(serverConn){

};

Series SeriesDAO::getSeriesbyID(int internal_id){
    Series RequestedSeries;
    try
    {
        vector<Series *> serieList = this->serverConn->getSeries();
        vector<Series *>::iterator seriesIterator = serieList.begin();
        size_t index = 0;
        while(seriesIterator != serieList.end()){
            if((*seriesIterator)->getInternal_id() == internal_id){
                Series* buffer = *seriesIterator;
                RequestedSeries = *buffer;
                break;
            }
            index++;
            seriesIterator++;
        }
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }
    return *RequestedSeries;
};

vector<Series> SeriesDAO::getSeriesOrderByTitle(){
    vector<Series> SeriesByTitle;
    try
    {
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return SeriesByTitle;
};

vector<Series> SeriesDAO::getSeriesOrderbyNetwork(){
    vector<Series> SeriesByNetwork;
    try
    {
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return SeriesByNetwork;
};
vector<Series> SeriesDAO::getSeriesOrderbyYear(){
    vector<Series> SeriesByYear;
    try
    {
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return SeriesByYear;
};
vector<Series> SeriesDAO::getSeriesOrderbyRating(){
    vector<Series> SeriesByRating;
    try
    {
        
    }
    catch(const std::exception& e)
    {
        std::cerr << e.what() << '\n';
    }

    return SeriesByRating;
};