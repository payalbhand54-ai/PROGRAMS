function CheckEven(iNo)
{
    if(iNo % 2 == 0)
    {
      console.log("Even number ");
    }
    else
    {
      console.log("Odd number ");
    }
}

function main()
{
    let iValue = 10;

    CheckEven(iValue);

}

main();