enum ENUM_INIT_RETCODE
{
    /**
	 * @brief Successful initialization, testing of the Expert Advisor can be continued. 
	 * 
	 * This code means the same as a null value - the Expert Advisor has been successfully initialized in the tester.
	 */
    INIT_SUCCEEDED = 0,

    /**
     * @brief * Initialization failed; there is no point in continuing testing because of fatal errors. For example, failed to create an indicator that is required for the work of the Expert Advisor.
     * This return value means the same as a value other than zero - initialization of the Expert Advisor in the tester failed.
     * 
     */
    INIT_FAILED = -1,

    /**
	 * @brief This value means the incorrect set of input parameters. The result string containing this return code is highlighted in red in the general optimization table.
 	 * Testing for the given set of parameters of the Expert Advisor will not be executed
	 * 
	 */
    INIT_PARAMETERS_INCORRECT = -2,
};