<style>
    b {
        color: #08f;
        text-decoration: underline;
        text-underline-position: under;
        font-size: 1.1rem;
        font-style: italic;
    }
</style>

Storage classes determine the following for variables:
1. <b>Default Value</b>
2. <b>Scope</b>
3. <b>Storage Location</b>
4. <b>Lifetime</b>

There are four storage classes in C:
1. <b>Automatic (auto)</b>
2. <b>Register</b>
3. <b>Static</b>
4. <b>External</b>
***
## Auto
This is the default storage class for all C variables.

The auto storage class sets the following values for variables:
1. <b>Default Value:</b> It is set to any garbage value.
2. <b>Scope:</b> The scope
of the variable is either function/method scope or block scope (local
scope).
3. <b>Location:</b> The variable will be stored in the stack.
4. <b>Lifetime:</b> Lifetime of the variable is till the end of the block.
***
## Register
Using the register storage class enables us to store variables directly
into the CPU register resulting in faster processing speeds as there is
no need to switch between RAM and register for each instruction.

If the compiler is not able to store the variables in the CPU register
the variables will have the default storage class i.e., "auto".

**We can not use pointers with register variables as they do not exist
in memory.

The register storage class sets the following rules for the variables.
1. <b>Default Value:</b> It is set to any garbage value.
2. <b>Scope:</b> Same as auto, the scope of the variable having storage
class register is function/method or block scope i.e., local scope.
3. <b>Location:</b> The variable will be stored in the CPU register.
4. <b>Lifetime:</b> Lifetime of the variable is till the end of the block.
***
## Static
The static storage class enables a variable to hold its value throughout
the program.

It is initialized only once and the memory allocated to it is freed only
after the program has exited.
1. <b>Default Value:</b> Static variables are initialized with 0.
1. <b>Scope:</b> They are locally scoped.
1. <b>Location:</b> They live within a separate memory section.
1. <b>Lifetime:</b> The lifetime of a static variable is the entire
runtime of the program.
***
## External
extern storage class is used when we want to access a variable from a
different file.
It can be used either with variables or with functions.

Only global variables/functions can have the external storage class.

1. <b>Default Value:</b> Initialized with 0.
1. <b>Scope:</b> Global.
1. <b>Location:</b> RAM (Main memory).
1. <b>Lifetime:</b> 