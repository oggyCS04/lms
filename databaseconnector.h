#ifndef DATABASECONNECTOR_H
#define DATABASECONNECTOR_H

#include <QtSql>
#include <QSqlDatabase>
#include <QDebug>  // For debugging output

class DatabaseConnector : public QSqlDatabase{
public:
    DatabaseConnector();  // Constructor to handle database connection
    ~DatabaseConnector();  // Destructor to close the connection

private:
    QSqlDatabase db;
};

#endif // DATABASECONNECTOR_H

