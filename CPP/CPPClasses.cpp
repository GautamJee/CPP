#include <iostream>

class Log {
public:
	enum Level {
		LevelError, LevelWarning, LevelInfo
	};

	Level m_loglevel = LevelInfo;

	void setLevel(Level l)
	{
		m_loglevel = l;
	}

	void Error(const char* msg) {
		if (m_loglevel >= LevelError) {
			std::cout << "[Error]:" << msg << std::endl;
		}
	}

	void Warn(const char* msg) {
		if (m_loglevel >= LevelWarning) {
			std::cout << "[Warning]:" << msg << std::endl;
		}
	}

	void Info(const char* msg) {
		if (m_loglevel >= LevelInfo) {
			std::cout << "[Info]:" << msg << std::endl;
		}
	}
};
void Classes()
{
	Log log;
	log.setLevel(Log::LevelWarning);
	log.Info("Hello");
}