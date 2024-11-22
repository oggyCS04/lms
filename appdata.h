// AppData.h
#include <QString>

class AppData {
public:
    static AppData& instance() {
        static AppData instance;
        return instance;
    }

    void setUsername(const QString &username) { this->username = username; }
    QString getUsername() const { return username; }

private:
    AppData() = default; // Private constructor for Singleton
    QString username;
};
