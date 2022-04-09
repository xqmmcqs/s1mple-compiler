#include <stdexcept>
#include <string>

namespace PascalS
{
class ProcedureNotFoundException : public std::runtime_error
{
public:
    ProcedureNotFoundException(std::string name) : std::runtime_error("Procedure not found: " + name + ".") {}
};
} // namespace PascalS
