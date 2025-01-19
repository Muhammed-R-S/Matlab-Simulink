    function targMap = targDataMap(),

    ;%***********************
    ;% Create Parameter Map *
    ;%***********************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 0;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc paramMap
        ;%
        paramMap.nSections           = nTotSects;
        paramMap.sectIdxOffset       = sectIdxOffset;
        paramMap.nTotData            = -1;

        ;%
        ;% Auto data (rtP)
        ;%

            ;%
            ;% Non-auto Data (parameter)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        paramMap.nTotData = nTotData;



    ;%**************************
    ;% Create Block Output Map *
    ;%**************************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 2;
        sectIdxOffset = 0;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc sigMap
        ;%
        sigMap.nSections           = nTotSects;
        sigMap.sectIdxOffset       = sectIdxOffset;
            sigMap.sections(nTotSects) = dumSection; %prealloc
        sigMap.nTotData            = -1;

        ;%
        ;% Auto data (rtB)
        ;%
            section.nData     = 28;
            section.data(28)  = dumData; %prealloc

                    ;% rtB.UnitDelay
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.FromWs
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.UnitDelay_b
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 3;

                    ;% rtB.UnitDelay_m
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 4;

                    ;% rtB.Switch
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 5;

                    ;% rtB.UnitDelay_j
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 6;

                    ;% rtB.FromWs_g
                    section.data(7).logicalSrcIdx = 6;
                    section.data(7).dtTransOffset = 7;

                    ;% rtB.FromWs_d
                    section.data(8).logicalSrcIdx = 7;
                    section.data(8).dtTransOffset = 8;

                    ;% rtB.UnitDelay_e
                    section.data(9).logicalSrcIdx = 8;
                    section.data(9).dtTransOffset = 9;

                    ;% rtB.UnitDelay_a
                    section.data(10).logicalSrcIdx = 9;
                    section.data(10).dtTransOffset = 10;

                    ;% rtB.FromWs_f
                    section.data(11).logicalSrcIdx = 10;
                    section.data(11).dtTransOffset = 11;

                    ;% rtB.FromWs_f2
                    section.data(12).logicalSrcIdx = 11;
                    section.data(12).dtTransOffset = 12;

                    ;% rtB.Merge
                    section.data(13).logicalSrcIdx = 12;
                    section.data(13).dtTransOffset = 13;

                    ;% rtB.Switch1
                    section.data(14).logicalSrcIdx = 13;
                    section.data(14).dtTransOffset = 14;

                    ;% rtB.CANA_RHWLoadSts
                    section.data(15).logicalSrcIdx = 14;
                    section.data(15).dtTransOffset = 15;

                    ;% rtB.CANB_RHWindowSts
                    section.data(16).logicalSrcIdx = 15;
                    section.data(16).dtTransOffset = 16;

                    ;% rtB.R_DefrostCmd
                    section.data(17).logicalSrcIdx = 16;
                    section.data(17).dtTransOffset = 17;

                    ;% rtB.R_DefrostInfo
                    section.data(18).logicalSrcIdx = 17;
                    section.data(18).dtTransOffset = 18;

                    ;% rtB.RDStatus
                    section.data(19).logicalSrcIdx = 18;
                    section.data(19).dtTransOffset = 19;

                    ;% rtB.TdefCounter
                    section.data(20).logicalSrcIdx = 19;
                    section.data(20).dtTransOffset = 20;

                    ;% rtB.RDStatus_e
                    section.data(21).logicalSrcIdx = 20;
                    section.data(21).dtTransOffset = 21;

                    ;% rtB.FirstActivation2
                    section.data(22).logicalSrcIdx = 21;
                    section.data(22).dtTransOffset = 22;

                    ;% rtB.RDStatus_eq
                    section.data(23).logicalSrcIdx = 22;
                    section.data(23).dtTransOffset = 23;

                    ;% rtB.TdefCounter_g
                    section.data(24).logicalSrcIdx = 23;
                    section.data(24).dtTransOffset = 24;

                    ;% rtB.FirstActivation1
                    section.data(25).logicalSrcIdx = 24;
                    section.data(25).dtTransOffset = 25;

                    ;% rtB.FirstActivation
                    section.data(26).logicalSrcIdx = 25;
                    section.data(26).dtTransOffset = 26;

                    ;% rtB.RDStatus_d
                    section.data(27).logicalSrcIdx = 26;
                    section.data(27).dtTransOffset = 27;

                    ;% rtB.TdefCounter_i
                    section.data(28).logicalSrcIdx = 27;
                    section.data(28).dtTransOffset = 28;

            nTotData = nTotData + section.nData;
            sigMap.sections(1) = section;
            clear section

            section.nData     = 20;
            section.data(20)  = dumData; %prealloc

                    ;% rtB.RelationalOperator
                    section.data(1).logicalSrcIdx = 28;
                    section.data(1).dtTransOffset = 0;

                    ;% rtB.LogicalOperator2
                    section.data(2).logicalSrcIdx = 29;
                    section.data(2).dtTransOffset = 1;

                    ;% rtB.LogicalOperator1
                    section.data(3).logicalSrcIdx = 30;
                    section.data(3).dtTransOffset = 2;

                    ;% rtB.RelationalOperator1
                    section.data(4).logicalSrcIdx = 31;
                    section.data(4).dtTransOffset = 3;

                    ;% rtB.RelationalOperator_h
                    section.data(5).logicalSrcIdx = 32;
                    section.data(5).dtTransOffset = 4;

                    ;% rtB.LogicalOperator3
                    section.data(6).logicalSrcIdx = 33;
                    section.data(6).dtTransOffset = 5;

                    ;% rtB.Compare
                    section.data(7).logicalSrcIdx = 34;
                    section.data(7).dtTransOffset = 6;

                    ;% rtB.LogicalOperator2_i
                    section.data(8).logicalSrcIdx = 35;
                    section.data(8).dtTransOffset = 7;

                    ;% rtB.LogicalOperator
                    section.data(9).logicalSrcIdx = 36;
                    section.data(9).dtTransOffset = 8;

                    ;% rtB.LogicalOperator4
                    section.data(10).logicalSrcIdx = 37;
                    section.data(10).dtTransOffset = 9;

                    ;% rtB.LogicalOperator3_g
                    section.data(11).logicalSrcIdx = 38;
                    section.data(11).dtTransOffset = 10;

                    ;% rtB.RelationalOperator1_e
                    section.data(12).logicalSrcIdx = 39;
                    section.data(12).dtTransOffset = 11;

                    ;% rtB.RelationalOperator_m
                    section.data(13).logicalSrcIdx = 40;
                    section.data(13).dtTransOffset = 12;

                    ;% rtB.LogicalOperator3_k
                    section.data(14).logicalSrcIdx = 41;
                    section.data(14).dtTransOffset = 13;

                    ;% rtB.RelationalOperator1_p
                    section.data(15).logicalSrcIdx = 42;
                    section.data(15).dtTransOffset = 14;

                    ;% rtB.RelationalOperator_e
                    section.data(16).logicalSrcIdx = 43;
                    section.data(16).dtTransOffset = 15;

                    ;% rtB.LogicalOperator3_e
                    section.data(17).logicalSrcIdx = 44;
                    section.data(17).dtTransOffset = 16;

                    ;% rtB.RelationalOperator1_i
                    section.data(18).logicalSrcIdx = 45;
                    section.data(18).dtTransOffset = 17;

                    ;% rtB.RelationalOperator_j
                    section.data(19).logicalSrcIdx = 46;
                    section.data(19).dtTransOffset = 18;

                    ;% rtB.LogicalOperator3_j
                    section.data(20).logicalSrcIdx = 47;
                    section.data(20).dtTransOffset = 19;

            nTotData = nTotData + section.nData;
            sigMap.sections(2) = section;
            clear section


            ;%
            ;% Non-auto Data (signal)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        sigMap.nTotData = nTotData;



    ;%*******************
    ;% Create DWork Map *
    ;%*******************
    
        nTotData      = 0; %add to this count as we go
        nTotSects     = 6;
        sectIdxOffset = 2;

        ;%
        ;% Define dummy sections & preallocate arrays
        ;%
        dumSection.nData = -1;
        dumSection.data  = [];

        dumData.logicalSrcIdx = -1;
        dumData.dtTransOffset = -1;

        ;%
        ;% Init/prealloc dworkMap
        ;%
        dworkMap.nSections           = nTotSects;
        dworkMap.sectIdxOffset       = sectIdxOffset;
            dworkMap.sections(nTotSects) = dumSection; %prealloc
        dworkMap.nTotData            = -1;

        ;%
        ;% Auto data (rtDW)
        ;%
            section.nData     = 6;
            section.data(6)  = dumData; %prealloc

                    ;% rtDW.UnitDelay_DSTATE
                    section.data(1).logicalSrcIdx = 0;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.UnitDelay_DSTATE_k
                    section.data(2).logicalSrcIdx = 1;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.UnitDelay_DSTATE_i
                    section.data(3).logicalSrcIdx = 2;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.UnitDelay_DSTATE_a
                    section.data(4).logicalSrcIdx = 3;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.UnitDelay_DSTATE_m
                    section.data(5).logicalSrcIdx = 4;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.UnitDelay_DSTATE_f
                    section.data(6).logicalSrcIdx = 5;
                    section.data(6).dtTransOffset = 5;

            nTotData = nTotData + section.nData;
            dworkMap.sections(1) = section;
            clear section

            section.nData     = 17;
            section.data(17)  = dumData; %prealloc

                    ;% rtDW.Scope_PWORK.LoggedData
                    section.data(1).logicalSrcIdx = 6;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.Scope1_PWORK.LoggedData
                    section.data(2).logicalSrcIdx = 7;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.FromWs_PWORK.TimePtr
                    section.data(3).logicalSrcIdx = 8;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.Scope2_PWORK.LoggedData
                    section.data(4).logicalSrcIdx = 9;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.FromWs_PWORK_c.TimePtr
                    section.data(5).logicalSrcIdx = 10;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.FromWs_PWORK_p.TimePtr
                    section.data(6).logicalSrcIdx = 11;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.FromWs_PWORK_l.TimePtr
                    section.data(7).logicalSrcIdx = 12;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.FromWs_PWORK_n.TimePtr
                    section.data(8).logicalSrcIdx = 13;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.Scope3_PWORK.LoggedData
                    section.data(9).logicalSrcIdx = 14;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.Scope4_PWORK.LoggedData
                    section.data(10).logicalSrcIdx = 15;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.Scope5_PWORK.LoggedData
                    section.data(11).logicalSrcIdx = 16;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.Scope6_PWORK.LoggedData
                    section.data(12).logicalSrcIdx = 17;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.Scope7_PWORK.LoggedData
                    section.data(13).logicalSrcIdx = 18;
                    section.data(13).dtTransOffset = 12;

                    ;% rtDW.Scope8_PWORK.LoggedData
                    section.data(14).logicalSrcIdx = 19;
                    section.data(14).dtTransOffset = 13;

                    ;% rtDW.Scope9_PWORK.LoggedData
                    section.data(15).logicalSrcIdx = 20;
                    section.data(15).dtTransOffset = 14;

                    ;% rtDW.Scope_PWORK_a.LoggedData
                    section.data(16).logicalSrcIdx = 21;
                    section.data(16).dtTransOffset = 15;

                    ;% rtDW.Scope_PWORK_m.LoggedData
                    section.data(17).logicalSrcIdx = 22;
                    section.data(17).dtTransOffset = 16;

            nTotData = nTotData + section.nData;
            dworkMap.sections(2) = section;
            clear section

            section.nData     = 3;
            section.data(3)  = dumData; %prealloc

                    ;% rtDW.temporalCounter_i2
                    section.data(1).logicalSrcIdx = 23;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.temporalCounter_i2_p
                    section.data(2).logicalSrcIdx = 24;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.temporalCounter_i2_ps
                    section.data(3).logicalSrcIdx = 25;
                    section.data(3).dtTransOffset = 2;

            nTotData = nTotData + section.nData;
            dworkMap.sections(3) = section;
            clear section

            section.nData     = 5;
            section.data(5)  = dumData; %prealloc

                    ;% rtDW.FromWs_IWORK.PrevIndex
                    section.data(1).logicalSrcIdx = 26;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.FromWs_IWORK_b.PrevIndex
                    section.data(2).logicalSrcIdx = 27;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.FromWs_IWORK_h.PrevIndex
                    section.data(3).logicalSrcIdx = 28;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.FromWs_IWORK_k.PrevIndex
                    section.data(4).logicalSrcIdx = 29;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.FromWs_IWORK_c.PrevIndex
                    section.data(5).logicalSrcIdx = 30;
                    section.data(5).dtTransOffset = 4;

            nTotData = nTotData + section.nData;
            dworkMap.sections(4) = section;
            clear section

            section.nData     = 1;
            section.data(1)  = dumData; %prealloc

                    ;% rtDW.If_ActiveSubsystem
                    section.data(1).logicalSrcIdx = 31;
                    section.data(1).dtTransOffset = 0;

            nTotData = nTotData + section.nData;
            dworkMap.sections(5) = section;
            clear section

            section.nData     = 13;
            section.data(13)  = dumData; %prealloc

                    ;% rtDW.is_active_c4_Defrost_3
                    section.data(1).logicalSrcIdx = 32;
                    section.data(1).dtTransOffset = 0;

                    ;% rtDW.is_Load_Shed_Management
                    section.data(2).logicalSrcIdx = 33;
                    section.data(2).dtTransOffset = 1;

                    ;% rtDW.is_Defrost_Management
                    section.data(3).logicalSrcIdx = 34;
                    section.data(3).dtTransOffset = 2;

                    ;% rtDW.is_active_c2_Defrost_3
                    section.data(4).logicalSrcIdx = 35;
                    section.data(4).dtTransOffset = 3;

                    ;% rtDW.temporalCounter_i1
                    section.data(5).logicalSrcIdx = 36;
                    section.data(5).dtTransOffset = 4;

                    ;% rtDW.is_Load_Shed_Management_l
                    section.data(6).logicalSrcIdx = 37;
                    section.data(6).dtTransOffset = 5;

                    ;% rtDW.is_Defrost_Management_a
                    section.data(7).logicalSrcIdx = 38;
                    section.data(7).dtTransOffset = 6;

                    ;% rtDW.is_active_c1_Defrost_3
                    section.data(8).logicalSrcIdx = 39;
                    section.data(8).dtTransOffset = 7;

                    ;% rtDW.temporalCounter_i1_j
                    section.data(9).logicalSrcIdx = 40;
                    section.data(9).dtTransOffset = 8;

                    ;% rtDW.is_Load_Shed_Management_c
                    section.data(10).logicalSrcIdx = 41;
                    section.data(10).dtTransOffset = 9;

                    ;% rtDW.is_Defrost_Management_o
                    section.data(11).logicalSrcIdx = 42;
                    section.data(11).dtTransOffset = 10;

                    ;% rtDW.is_active_c3_Defrost_3
                    section.data(12).logicalSrcIdx = 43;
                    section.data(12).dtTransOffset = 11;

                    ;% rtDW.temporalCounter_i1_j4
                    section.data(13).logicalSrcIdx = 44;
                    section.data(13).dtTransOffset = 12;

            nTotData = nTotData + section.nData;
            dworkMap.sections(6) = section;
            clear section


            ;%
            ;% Non-auto Data (dwork)
            ;%


        ;%
        ;% Add final counts to struct.
        ;%
        dworkMap.nTotData = nTotData;



    ;%
    ;% Add individual maps to base struct.
    ;%

    targMap.paramMap  = paramMap;
    targMap.signalMap = sigMap;
    targMap.dworkMap  = dworkMap;

    ;%
    ;% Add checksums to base struct.
    ;%


    targMap.checksum0 = 1595161754;
    targMap.checksum1 = 4194826461;
    targMap.checksum2 = 388495432;
    targMap.checksum3 = 447423483;

