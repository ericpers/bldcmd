#ifndef IMPL_START_H
#define IMPL_START_H

#include "comnd-reac/command_react.h"

namespace comnd_reac {

namespace impl {

    class Start : public CommandReact {
        bool exec(std::vector<std::string> args) override {

            return true;
        }
    };


}

}  // namespace comnd_reac

#endif
