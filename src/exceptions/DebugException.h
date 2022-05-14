#include <stdexcept>
#include <string>

namespace PascalS
{
class DebugException : public std::runtime_error
{
public:
    DebugException(std::string msg) : std::runtime_error("Caught DebugException: " + msg + ".") {}
};
} // namespace PascalS