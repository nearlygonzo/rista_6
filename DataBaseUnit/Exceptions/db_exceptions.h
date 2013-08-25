#ifndef DB_EXCEPTIONS_H
#define DB_EXCEPTIONS_H

#include <boost/exception/all.hpp>
#include <QString>

class DB_Exceptions : public boost::exception
{
public:
    DB_Exceptions();
};

#endif // DB_EXCEPTIONS_H
