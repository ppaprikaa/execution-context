#include <ctx/context.hpp>

void Context::Setup(MutableMemView stack, ITrampoline *trampoline) {
    trampoline_ = trampoline;
    hw_.Setup(std::move(stack), this);
}

void Context::SwitchTo(Context &target) { hw_.SwitchTo(target.hw_); }
