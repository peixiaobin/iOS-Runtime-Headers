/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/PhotoLibraryServices.framework/PhotoLibraryServices
 */

@interface PLCloudScheduler : NSObject <PLCloudScenarioConsumer> {
    NSObject<OS_dispatch_queue> *_backlogSync;
    int _concurrencyLevel;
    NSObject<OS_dispatch_queue> *_operationsQueue;
    NSMutableOrderedSet *_pendingOperations;
    NSMutableDictionary *_pendingScenarios;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)completeOperation:(id)arg1 withError:(id)arg2;
- (void)consumeScenario:(id)arg1 withCompletionHandler:(id /* block */)arg2;
- (void)dealloc;
- (id)initWithConfiguration:(id)arg1;
- (unsigned int)operationsBacklogLimit;
- (void)reporioritizeBacklogOperations;
- (void)runNextOperation;

@end
