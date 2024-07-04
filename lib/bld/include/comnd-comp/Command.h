#if !defined(COMMAND_H)
#define COMMAND_H
#include <string>
#include <vector>

namespace comnd_comp {


class Command {
    std::vector<std::string>              commandName;
    std::vector<std::vector<std::string>> commandArgs;

    public:
    [[nodiscard]] std::vector<std::string>              command_name() const;
    [[nodiscard]] std::vector<std::vector<std::string>> command_args() const;
    [[nodiscard]] size_t                                command_size() const;

    private:
    size_t                                commandSize{0};

    static Command *commndInst;

    Command();

    public:
    static Command *GetInstance();

    void Clear();
    void AppendCmdName(std::string cmdName);
    void AppendCmdArg(std::vector<std::string> cmdArg);
};
}  // namespace comnd_comp

#endif
