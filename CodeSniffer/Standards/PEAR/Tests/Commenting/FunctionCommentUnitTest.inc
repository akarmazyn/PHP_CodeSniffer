<?php
class PHP_CodeSniffer_File
{

    /**
     * A simple function comment.
     *
     * long desc here
     *
     * @param int $stackPtr   The position in @ @unknown the stack of the token
     *                        that opened the scope
     * @param int $detph    How many scope levels down we are.
     * @param int    $index    The index
     * @return
     * @throws
     */
    private function _functionCall($stackPtr, $depth=1, $index)
    {
        return $stackPtr;

    }//end _functionCall()

    //
    // Sample function comment
    //
    //
    //
    public function invalidCommentStyle()
    {

    }//end invalidCommentStyle()


    /**
     *
     *
     * A simple function comment
     *
     *
     * Long description with extra blank line before and after
     *
     *
     * @return void
     */
    public function extraDescriptionNewlines()
    {

    }//end extraDescriptionNewlines()


    /**
     * A simple function comment
     * @return void
     */
    public function missingNewlinesBeforeTags()
    {

    }//end missingNewlinesBeforeTags()


    /**
     * Access tag should not be treated as a long description
     *
     * @access public
     * @return void
     */
    public function accessTag()
    {

    }//end accessTag()

    /**
     * Constructor
     *
     * No return tag
     */
    function PHP_CodeSniffer_File()
    {
        return;
    }


    /**
     * Destructor
     *
     * No return tag too
     */
    function _PHP_CodeSniffer_File()
    {
        return;
    }


    /**
     * Destructor PHP5
     */
    function __destruct()
    {
        return;
    }


    function missingComment()
    {
        return;
    }


    /**
     * no return tag
     *
     */
    public function noReturn($one)
    {

    }//end noReturn()


    /**
     * Param not immediate
     *
     * @return
     * @param   int   $threeSpaces
     * @param int     $superfluous
     * @param missing
     * @param
     */
    public function missingDescription($threeSpaces)
    {

    }//end missingDescription()


    /**
     * Param not immediate
     *
     * @param int      $one   comment
     * @param int      $two   comment
     * @param string   $three comment
     *
     * @return void
     */
    public function oneSpaceAfterLongestVar($one, $two, $three)
    {

    }//end oneSpaceAfterLongestVar()


}//end class


/**
 * A simple function comment
 *
 * @param string &$str The string passed in by reference
 * @param string $foo  The string passed in by reference
 *
 * @return void
 */
public function functionOutsideClass(&$str, &$foo)
{
    return;
}//end functionOutsideClass()

function missingCommentOutsideClass()
{
    return;
}//end missingCommentOutsideClass()


?><?php
function tagBeforeComment()
{
    return;
}//end tagBeforeComment()


/**
 * no return tag
 *
 *
 *
 */
public function noReturnOutsideClass()
{

}//end noReturnOutsideClass()


/**
 * Missing param comment
 *
 * @param int $one comment
 *
 * @return void
 * @fine  Unknown tag
 */
public function missingTwoParamComment($one, $two, $three)
{

}//end missingTwoParamComment()


/**
 *
 */
function emptyFunctionDocComment()
{
}//end emptyFunctionDocComment()


/**
 * Test function.
 *
 * @param string $arg1 An argument
 *
 * @access public
 * @return bool
 */
function myFunction($arg1) {}


/**
 * Test function.
 *
 * @param string $arg1 An argument
 *
 * @access public
 * @return bool
 */

echo $blah;

function myFunction($arg1) {}

/**
 * Test function.
 *
 * @access public
 * @return bool
 * @throws MyException
 * @throws MyException When I feel like it
 */
function myFunction() {}

class MyClass() {
    /**
     * An abstract function.
     *
     * @return string[]
     */
    abstract final protected function myFunction();
}

/**
 * Creates a map of tokens => line numbers for each token.
 *
 * @param array  $tokens    The array of tokens to process.
 * @param object $tokenizer The tokenizer being used to process this file.
 * @param string $eolChar   The EOL character to use for splitting strings.
 *
 * @return void
 */
public function foo(&$tokens, $tokenizer, $eolChar)
{

}//end foo()

/**
 * Gettext.
 *
 */
public function _() {
    return $foo;
}

class Baz {
    /**
     * The PHP5 constructor
     *
     * No return tag
     */
    public function __construct() {

    }
}

/**
 * Complete a step.
 *
 * @param string $status Status of step to complete.
 * @param array  $array  Array.
 * @param string $note   Optional note.
 *
 * @return void
 */
public function completeStep($status, array $array = [Class1::class, 'test'], $note = '') {
    echo 'foo';
}
