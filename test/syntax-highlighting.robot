
*** Settings ***

Documentation   This file is here to test syntax highlighting

*** Variables ***

${foo} =    Some value

*** Keywords ***

Simple Keyword
    [Documentation]     Hello
    ...                 World

    Simple Keyword Invocation

    Keyword Invocation      With    Arguments
    ...                     On      Multiple lines

    ${foo} =    Bar

Keyword Testing A Bunch Of Things
    ${bar} =    Something

    # FOR loops

    Log To Console      ELSE IF

    FOR  ${x}  IN  @{zoom}
        Do stuff

        BREAK
    END

    FOR    ${var}    IN    one    two    ${3}    four    ${five}
    ...    kuusi    7    eight    nine    ${last}
        Log    ${var}

        CONTINUE
    END

    FOR    ${row}    IN    @{table}
        FOR    ${cell}    IN    @{row}
            Handle Cell    ${cell}
        END
    END

    FOR  ${x}  IN RANGE  10
        Do stuff
    END

    FOR    ${index}    ${item}    IN ENUMERATE    @{LIST}
        My Keyword    ${index}    ${item}
    END

    FOR    ${number}    ${name}    IN ZIP    ${NUMBERS}    ${NAMES}
        Log Many    ${number}    ${name}
    END

    # WHILE loops

    WHILE    ${rc} != 0
        ${rc} =    Keyword that returns zero on success
    END

    WHILE    True    limit=100
        Log    This is run 100 times.
    END

    # IF statements

    IF  ${bar}
        Do Something
    END

    IF  foo
        Somethign cool
    ELSE IF    pow
        Hell yeah!
    ELSE IF    pow
        Hell yeah!
    ELSE
        Booooyeeeah
    END

    IF    not ${items}
        Log to console    No items.
    ELSE IF    len(${items}) == 1
        IF    ${log_values}
            Log to console    One item: ${items}[0]
        ELSE
            Log to console    One item.
        END
    ELSE
        Log to console    ${{len(${items})}} items.
        IF    ${log_values}
            FOR    ${index}    ${item}    IN ENUMERATE    @{items}    start=1
                Log to console    Item ${index}: ${item}
            END
        END
    END

    # TRY/EXCEPT

    TRY
        Some Keyword
    EXCEPT    Error message
        Error Handler Keyword
    END

    TRY
        Some Keyword
    EXCEPT    Error message    # Try matching this first.
        Error Handler 1
    EXCEPT    Another error    # Try this if above did not match.
        Error Handler 2
    EXCEPT    ${message}       # Last match attempt, this time using a variable.
        Error Handler 3
    END

    TRY
        Use Connection
    FINALLY
        Close Connection
    END

    TRY
        Some keyword
    EXCEPT
        Log    Error occurred!
    ELSE
        Log    No error occurred.
    FINALLY
        Log    Always executed.
    END

*** Test Cases ***

Test Foo
    [Documentation]     Hello, world!

    Expect Equals       1       2
