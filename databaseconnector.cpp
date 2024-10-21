#include "databaseconnector.h"

DatabaseConnector::DatabaseConnector() {
    db = QSqlDatabase::addDatabase("QMYSQL");  // Initialize with MySQL driver
    db.setHostName("127.0.0.1");               // Set host (localhost)
    db.setUserName("root");                    // Set the MySQL username
    db.setPassword("");                        // Set the MySQL password
    db.setDatabaseName("lms_thapathali");      // Set the database name

    if (!db.open()) {  // Attempt to open the database
        // Output error if connection fails
        qDebug() << "Error: Unable to connect to the database -" << db.lastError().text();
    } else {
        qDebug() << "Database connection established successfully!";
    }
}

DatabaseConnector::~DatabaseConnector() {

}
